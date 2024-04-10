
void Log(const char* message);

static int Multiply(int a, int b)
{
	Log("Multiply");
	int result = a * b;

	return result;
}