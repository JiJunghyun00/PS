for (int i = 1;i < food_len;i++)
{
    while (food[i] > 0)
    {
        answer[count] = (char)(i + 48);
        answer[answer_len - count - 1] = (char)(i + 48);
        food[i]--;
        printf("\n%d", answer[count]);
        count++;
    }
}