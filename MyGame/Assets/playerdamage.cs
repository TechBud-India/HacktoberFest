using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerdamage : MonoBehaviour
{
    public int health = 100;



    public void TakeDamage(int damage)
    {
        health = health - damage;

        if (health <= 0)
        {
            GameOver();
        }


    }

    void GameOver()
    {
        Debug.Log("Game Over");
        Destroy(gameObject);
    }
}
