#pragma once

int zadanie1(struct Trojkat t) {
	return t.a + t.b + t.c;
}

void zadanie2(struct Trojkat troj1, struct Trojkat* troj2) {
	troj2->a = troj1.a;
	troj2->b = troj1.b;
	troj2->c = troj1.c;
}

void 