/*


p = i;	---------- legal
q = &j; ---------- legal
p = &*&i; -------- legal
i = (*&)j; ------- ilegal
i = *&j; --------- legal
i = *&*&j; ------- legal
q = *p; ---------- legal
i = (*p)++ + *q; - legal

*/
