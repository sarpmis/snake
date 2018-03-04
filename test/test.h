///////////////////////////////////////////////////////////
// test.h
// Methods for lighting a couple points up
///////////////////////////////////////////////////////////

struct Point{
	int x;
	int y;
	int z;
};

struct Line{
	struct Point* points;
};

struct Letter{
	int siz;
	char let;
	struct Point* points;
}

struct Word{
	int len;
	struct Letter* letters;
}

void initPoint(struct Point* point) {
	point = malloc(sizeof(struct Point));
	point->x = 0;
	point->y = 0;
	point->z = 0;
}

void initWord(char* text, Word* word) {
	int l;
	word->letters = malloc(strlen(text)*sizeof(struct Letter));
	word->len = strlen(text);
	for (l = 0; l < strlen(text); l++) {
		word->letters[l].let = text[i];
		initLetter(word->letters[l]);
	}
}

void initLetter(Letter* letter) {
	if (letter->let == 'A') {
		letter->points = malloc(12*sizeof(struct Point));
		letter->siz = 12;
		
		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 1;
		letter->points[6].z = 2;
		letter->points[7].x = 2;
		letter->points[7].z = 2;

		letter->points[8].x = 0;
		letter->points[8].z = 3;
		letter->points[9].x = 2;
		letter->points[9].z = 3;

		letter->points[10].x = 0
		letter->points[10].z = 4
		letter->points[11].x = 2
		letter->points[11].z = 4

	} else if (letter->let == 'B') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 1;
		letter->points[9].z = 4;

	} else if (letter->let == 'C') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 5;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;

		letter->points[5].x = 0;
		letter->points[5].z = 3;

		letter->points[6].x = 0;
		letter->points[6].z = 4;
		letter->points[7].x = 1;
		letter->points[7].z = 4;
		letter->points[8].x = 2;
		letter->points[8].z = 4;

	} else if (letter->let == 'D') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 2;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 1;
		letter->points[9].z = 4;

	} else if (letter->let == 'E') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;

		letter->points[7].x = 0;
		letter->points[7].z = 4;
		letter->points[8].x = 1;
		letter->points[8].z = 4;
		letter->points[9].x = 2;
		letter->points[9].z = 4;

	} else if (letter->let == 'F') {
		letter->points = malloc(8*sizeof(struct Point));
		letter->siz = 8;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;

		letter->points[7].x = 0;
		letter->points[7].z = 4;

	} else if (letter->let == 'G') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 2;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 1;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'H') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 0;
		letter->points[7].z = 3;
		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'I') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 9;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 1;
		letter->points[3].z = 1;

		letter->points[4].x = 1;
		letter->points[4].z = 2;

		letter->points[5].x = 1;
		letter->points[5].z = 3;

		letter->points[6].x = 0;
		letter->points[6].z = 4;
		letter->points[7].x = 1;
		letter->points[7].z = 4;
		letter->points[8].x = 2;
		letter->points[8].z = 4;

	} else if (letter->let == 'J') {
		letter->points = malloc(8*sizeof(struct Point));
		letter->siz = 8;

		letter->points[0].x = 2;
		letter->points[0].z = 0;

		letter->points[1].x = 2;
		letter->points[1].z = 1;

		letter->points[2].x = 2;
		letter->points[2].z = 2;

		letter->points[3].x = 0;
		letter->points[3].z = 3;
		letter->points[4].x = 2;
		letter->points[4].z = 3;

		letter->points[5].x = 0;
		letter->points[5].z = 4;
		letter->points[6].x = 1;
		letter->points[6].z = 4;
		letter->points[7].x = 2;
		letter->points[7].z = 4;

	} else if (letter->let == 'K') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 2;
		letter->points[9].z = 4;

	} else if (letter->let == 'L') {
		letter->points = malloc(7*sizeof(struct Point));
		letter->siz = 7;

		letter->points[0].x = 0;
		letter->points[0].z = 0;

		letter->points[1].x = 0;
		letter->points[1].z = 1;

		letter->points[2].x = 0;
		letter->points[2].z = 2;

		letter->points[3].x = 0;
		letter->points[3].z = 3;

		letter->points[4].x = 0;
		letter->points[4].z = 4;
		letter->points[5].x = 1;
		letter->points[5].z = 4;
		letter->points[6].x = 2;
		letter->points[6].z = 4;

	} else if (letter->let == 'M') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 1;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 0;
		letter->points[7].z = 3;
		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'N') {
		letter->points = malloc(13*sizeof(struct Point));
		letter->siz = 13;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 1;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 1;
		letter->points[6].z = 2;
		letter->points[7].x = 2;
		letter->points[7].z = 2;

		letter->points[8].x = 0;
		letter->points[8].z = 3;
		letter->points[9].x = 1;
		letter->points[9].z = 3;
		letter->points[10].x = 2
		letter->points[10].z = 3

		letter->points[11].x = 0
		letter->points[11].z = 4
		letter->points[12].x = 2
		letter->points[12].z = 4

	} else if (letter->let == 'O') {
		letter->points = malloc(12*sizeof(struct Point));
		letter->siz = 12;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 0;
		letter->points[7].z = 3;
		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 1
		letter->points[10].z = 4
		letter->points[11].x = 2
		letter->points[11].z = 4

	} else if (letter->let == 'P') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 1;
		letter->points[6].z = 2;
		letter->points[7].x = 2;
		letter->points[7].z = 2;

		letter->points[8].x = 0;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;

	} else if (letter->let == 'Q') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 0;
		letter->points[7].z = 3;
		letter->points[8].x = 1;
		letter->points[8].z = 3;
		letter->points[9].x = 2;
		letter->points[9].z = 3;

		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'R') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 2;
		letter->points[9].z = 4;

	} else if (letter->let == 'S') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 1;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'T') {
		letter->points = malloc(7*sizeof(struct Point));
		letter->siz = 7;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 1;
		letter->points[3].z = 1;

		letter->points[4].x = 1;
		letter->points[4].z = 2;

		letter->points[5].x = 1;
		letter->points[5].z = 3;

		letter->points[6].x = 1;
		letter->points[6].z = 4;

	} else if (letter->let == 'U') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 2;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 1;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'V') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 9;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 2;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 1;
		letter->points[8].z = 4;

	} else if (letter->let == 'W') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 2;
		letter->points[5].z = 2;

		letter->points[6].x = 0;
		letter->points[6].z = 3;
		letter->points[7].x = 1;
		letter->points[7].z = 3;
		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == 'X') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 9;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 1;
		letter->points[4].z = 2;

		letter->points[5].x = 0;
		letter->points[5].z = 3;
		letter->points[6].x = 2;
		letter->points[6].z = 3;

		letter->points[7].x = 0;
		letter->points[7].z = 4;
		letter->points[8].x = 2;
		letter->points[8].z = 4;

	} else if (letter->let == 'Y') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 9;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 1;
		letter->points[7].z = 3;

		letter->points[8].x = 1;
		letter->points[8].z = 4;

	} else if (letter->let == 'Z') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 9;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 1;
		letter->points[4].z = 2;

		letter->points[5].x = 0;
		letter->points[5].z = 3;

		letter->points[6].x = 0;
		letter->points[6].z = 4;
		letter->points[7].x = 1;
		letter->points[7].z = 4;
		letter->points[8].x = 2;
		letter->points[8].z = 4;

	} else if (letter->let == '0') {
		letter->points = malloc(12*sizeof(struct Point));
		letter->siz = 12;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 0;
		letter->points[7].z = 3;
		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 1
		letter->points[10].z = 4
		letter->points[11].x = 2
		letter->points[11].z = 4

	} else if (letter->let == '1') {
		letter->points = malloc(8*sizeof(struct Point));
		letter->siz = 8;

		letter->points[0].x = 1;
		letter->points[0].z = 0;

		letter->points[1].x = 0;
		letter->points[1].z = 1;
		letter->points[2].x = 1;
		letter->points[2].z = 1;

		letter->points[3].x = 1;
		letter->points[3].z = 2;

		letter->points[4].x = 1;
		letter->points[4].z = 3;

		letter->points[5].x = 0;
		letter->points[5].z = 4;
		letter->points[6].x = 1;
		letter->points[6].z = 4;
		letter->points[7].x = 2;
		letter->points[7].z = 4;

	} else if (letter->let == '2') {
		letter->points = malloc(8*sizeof(struct Point));
		letter->siz = 8;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;

		letter->points[2].x = 2;
		letter->points[2].z = 1;

		letter->points[3].x = 1;
		letter->points[3].z = 2;

		letter->points[4].x = 0;
		letter->points[4].z = 3;

		letter->points[5].x = 0;
		letter->points[5].z = 4;
		letter->points[6].x = 1;
		letter->points[6].z = 4;
		letter->points[7].x = 2;
		letter->points[7].z = 4;

	} else if (letter->let == '3') {
		letter->points = malloc(10*sizeof(struct Point));
		letter->siz = 10;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 1;
		letter->points[4].z = 2;
		letter->points[5].x = 2;
		letter->points[5].z = 2;

		letter->points[6].x = 2;
		letter->points[6].z = 3;

		letter->points[7].x = 0;
		letter->points[7].z = 4;
		letter->points[8].x = 1;
		letter->points[8].z = 4;
		letter->points[9].x = 2;
		letter->points[9].z = 4;

	} else if (letter->let == '4') {
		letter->points = malloc(9*sizeof(struct Point));
		letter->siz = 9;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 2;
		letter->points[1].z = 0;

		letter->points[2].x = 0;
		letter->points[2].z = 1;
		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 2;
		letter->points[8].z = 4;

	} else if (letter->let == '5') {
		letter->points = malloc(11*sizeof(struct Point));
		letter->siz = 11;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 2;
		letter->points[7].z = 3;

		letter->points[8].x = 0;
		letter->points[8].z = 4;
		letter->points[9].x = 1;
		letter->points[9].z = 4;
		letter->points[10].x = 2
		letter->points[10].z = 4

	} else if (letter->let == '6') {
		letter->points = malloc(12*sizeof(struct Point));
		letter->siz = 12;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;

		letter->points[4].x = 0;
		letter->points[4].z = 2;
		letter->points[5].x = 1;
		letter->points[5].z = 2;
		letter->points[6].x = 2;
		letter->points[6].z = 2;

		letter->points[7].x = 0;
		letter->points[7].z = 3;
		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 1
		letter->points[10].z = 4
		letter->points[11].x = 2
		letter->points[11].z = 4

	} else if (letter->let == '7') {
		letter->points = malloc(7*sizeof(struct Point));
		letter->siz = 7;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 2;
		letter->points[3].z = 1;

		letter->points[4].x = 1;
		letter->points[4].z = 2;

		letter->points[5].x = 0;
		letter->points[5].z = 3;

		letter->points[6].x = 0;
		letter->points[6].z = 4;

	} else if (letter->let == '8') {
		letter->points = malloc(13*sizeof(struct Point));
		letter->siz = 13;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 1;
		letter->points[6].z = 2;
		letter->points[7].x = 2;
		letter->points[7].z = 2;

		letter->points[8].x = 0;
		letter->points[8].z = 3;
		letter->points[9].x = 2;
		letter->points[9].z = 3;

		letter->points[10].x = 0
		letter->points[10].z = 4
		letter->points[11].x = 1
		letter->points[11].z = 4
		letter->points[12].x = 2
		letter->points[12].z = 4

	} else if (letter->let == '9') {
		letter->points = malloc(12*sizeof(struct Point));
		letter->siz = 12;

		letter->points[0].x = 0;
		letter->points[0].z = 0;
		letter->points[1].x = 1;
		letter->points[1].z = 0;
		letter->points[2].x = 2;
		letter->points[2].z = 0;

		letter->points[3].x = 0;
		letter->points[3].z = 1;
		letter->points[4].x = 2;
		letter->points[4].z = 1;

		letter->points[5].x = 0;
		letter->points[5].z = 2;
		letter->points[6].x = 1;
		letter->points[6].z = 2;
		letter->points[7].x = 2;
		letter->points[7].z = 2;

		letter->points[8].x = 2;
		letter->points[8].z = 3;

		letter->points[9].x = 0;
		letter->points[9].z = 4;
		letter->points[10].x = 1
		letter->points[10].z = 4
		letter->points[11].x = 2
		letter->points[11].z = 4
	}
}

void addWord(char* board, struct Word* word, int offset) {
	clearBoard();
	int i;
	int wordsize = sizeof(word->letters)/letterSize();
	for (i = 0; i < wordsize; i++) {
		addLetter(board,word->letters[i],offset + i*4);
	}
}



void addLetter(char* board, struct Letter* letter, int offset){
	int i;
	int lettersize = letter->;
	if (offset < 6) {
		for (i = 0; i < lettersize; i++) {
			addToBoard(board,7-letter->points[i].x-offset,0,letter->points[i].z+1);
		}
	} else {
		for (i = 0; i < lettersize; i++) {
			if (letter->points[i].x < 8) {
				addToBoard(board,7-letter->points[i].x-offset,0,letter->points[i].z+1);
			} else if (letter->points[i].x < 16) {
				addToBoard(board,0,15-letter->points[i].x-offset,letter->points[i].z+1);
			}
		}
	}
}

int letterSize(struct Letter* letter) {
	return s
