String::String(String&& orig) :
	p(orig.p), len(orig.len), capacity(orig.capacity)
{
	orig.p = nullptr;
}

String f() {
	String s1(100000, 'x');
	return s1;
}
