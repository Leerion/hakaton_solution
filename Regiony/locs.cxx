#encoding "utf-8"

locs -> Noun<kwtype="локация">;     
parts -> Adj<kwtype="часть">; 
parts_and -> parts "и" parts; 

island1 -> Word<kwtype="сокращение"> Noun;
island2 -> Noun Word<kwtype="сокращение">;
island3 -> Word<kwtype="сокращение"> Adj;
island4 -> Adj Word<kwtype="сокращение">;

subject -> Adj Word<kwtype="субъект">;

Loc -> parts interp (Loc.Part)
		locs interp (Loc.Region);

Loc -> locs interp (Loc.Region); 

Loc -> parts_and interp (Loc.Part) locs interp (Loc.Region);

Loc -> island1 interp (Loc.Region);
Loc -> island2 interp (Loc.Region);
Loc -> island3 interp (Loc.Region);
Loc -> island4 interp (Loc.Region);

Loc -> Word<kwtype="республика"> Noun interp (Loc.Region);

Loc -> subject interp (Loc.Region);
Loc -> Adj Word<kwtype="тип_округа"> Word<kwtype="субъект"> interp (Loc.Region);
Loc -> Adj Word<kwtype="остров"> interp (Loc.Region);
