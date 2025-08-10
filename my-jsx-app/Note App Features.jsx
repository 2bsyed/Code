// MainApp.jsx
import React, { useState } from 'react';
import { Card, CardContent } from "@/components/ui/card";
import { Button } from "@/components/ui/button";
import { Input } from "@/components/ui/input";
import { SketchPicker } from 'react-color';
import { Rnd } from 'react-rnd';

export default function MainApp() {
  const [folders, setFolders] = useState([]);
  const [activeFolder, setActiveFolder] = useState(null);
  const [notes, setNotes] = useState({});

  const addFolder = () => {
    const name = prompt("Folder name?");
    if (!name) return;
    setFolders([...folders, name]);
    setNotes({ ...notes, [name]: [] });
    setActiveFolder(name);
  };

  const addNote = () => {
    const newNote = {
      id: Date.now(),
      text: "",
      color: "#fff",
      fontColor: "#000",
      fontSize: 16,
      bold: false,
      italic: false,
      images: [],
    };
    setNotes({
      ...notes,
      [activeFolder]: [...notes[activeFolder], newNote],
    });
  };

  const updateNote = (id, changes) => {
    setNotes({
      ...notes,
      [activeFolder]: notes[activeFolder].map((n) =>
        n.id === id ? { ...n, ...changes } : n
      ),
    });
  };

  const handleImageUpload = (id, file) => {
    const reader = new FileReader();
    reader.onload = () => {
      updateNote(id, {
        images: [...notes[activeFolder].find(n => n.id === id).images, {
          src: reader.result,
          x: 50,
          y: 50,
        }],
      });
    };
    reader.readAsDataURL(file);
  };

  return (
    <div className="flex h-screen">
      <aside className="w-1/4 p-2 border-r">
        <Button onClick={addFolder}>New Folder</Button>
        {folders.map((f) => (
          <div
            key={f}
            className={`p-2 cursor-pointer rounded ${f === activeFolder ? 'bg-gray-200' : ''}`}
            onClick={() => setActiveFolder(f)}
          >
            {f}
          </div>
        ))}
      </aside>

      <main className="flex-1 p-4">
        {activeFolder && (
          <>
            <Button onClick={addNote}>Add Note</Button>
            <div className="grid grid-cols-3 gap-4 mt-4">
              {notes[activeFolder]?.map((note) => (
                <Card key={note.id} style={{ background: note.color }}>
                  <CardContent>
                    <textarea
                      value={note.text}
                      onChange={(e) => updateNote(note.id, { text: e.target.value })}
                      style={{
                        width: '100%',
                        height: '100px',
                        color: note.fontColor,
                        fontSize: note.fontSize,
                        fontWeight: note.bold ? 'bold' : 'normal',
                        fontStyle: note.italic ? 'italic' : 'normal',
                      }}
                    />

                    <div className="flex gap-1 mt-2">
                      <Input type="number" value={note.fontSize} onChange={(e) => updateNote(note.id, { fontSize: +e.target.value })} placeholder="Font Size" />
                      <Button onClick={() => updateNote(note.id, { bold: !note.bold })}>B</Button>
                      <Button onClick={() => updateNote(note.id, { italic: !note.italic })}>I</Button>
                    </div>

                    <SketchPicker
                      color={note.fontColor}
                      onChangeComplete={(color) => updateNote(note.id, { fontColor: color.hex })}
                    />

                    <SketchPicker
                      color={note.color}
                      onChangeComplete={(color) => updateNote(note.id, { color: color.hex })}
                    />

                    <Input
                      type="file"
                      accept="image/*"
                      onChange={(e) => handleImageUpload(note.id, e.target.files[0])}
                    />

                    <div className="relative w-full h-[200px] bg-white mt-2 border">
                      {note.images.map((img, i) => (
                        <Rnd
                          key={i}
                          default={{
                            x: img.x,
                            y: img.y,
                            width: 100,
                            height: 100,
                          }}
                          onDragStop={(e, d) => {
                            img.x = d.x;
                            img.y = d.y;
                            updateNote(note.id, { images: [...note.images] });
                          }}
                          onResizeStop={(e, dir, ref, delta, position) => {
                            img.x = position.x;
                            img.y = position.y;
                            updateNote(note.id, { images: [...note.images] });
                          }}
                        >
                          <img src={img.src} alt="uploaded" className="w-full h-full object-cover" />
                        </Rnd>
                      ))}
                    </div>
                  </CardContent>
                </Card>
              ))}
            </div>
          </>
        )}
      </main>
    </div>
  );
}
