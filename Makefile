

all: simple-chess

main.o: main.cc
core/math.o: core/math.hh core/math.cc
core/Player.o: core/Player.hh core/Player.cc
core/ChessGame.o: core/ChessGame.hh core/ChessGame.cc
core/ChessBoard.o: core/ChessBoard.hh core/ChessBoard.cc
core/ChessPiece.o: core/ChessPiece.hh core/ChessPiece.cc

core/King.o: core/King.hh core/King.cc
core/Queen.o: core/Queen.hh core/Queen.cc
core/Rook.o: core/Rook.hh core/Rook.cc
core/Bishop.o: core/Bishop.hh core/Bishop.cc
core/Knight.o: core/Knight.hh core/Knight.cc
core/Pawn.o: core/Pawn.hh core/Pawn.cc

core/PieceFactory.o: core/PieceFactory.hh core/PieceFactory.cc

simple-chess: core/math.o core/Player.o core/ChessGame.o core/ChessBoard.o core/ChessPiece.o core/King.o core/Queen.o core/Rook.o core/Bishop.o core/Knight.o core/Pawn.o core/PieceFactory.o main.o
	g++ core/math.o core/Player.o core/ChessBoard.o core/ChessPiece.o core/King.o core/Queen.o core/Rook.o core/Bishop.o core/Knight.o core/Pawn.o core/PieceFactory.o core/ChessGame.o main.o -Wall -o SimpleChess

clean:
	rm -f core/*.o *.gch *.o SimpleChess
