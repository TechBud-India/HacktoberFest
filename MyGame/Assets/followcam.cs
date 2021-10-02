using UnityEngine;
public class followcam : MonoBehaviour
{

    public Transform Player;
    public float smoothSpeed = 0.125f;
    public Vector3 offset;

    //FixedUpdate is used instead of Update whenever we're dealing with physics to get good mechanics.
    void FixedUpdate()
    {
        
        Vector3 smoothPosition = Vector3.Lerp(transform.position, desiredPos, smoothSpeed);
        transform.position = smoothPosition;

        // transform.LookAt(target); studdering motion
    }

}
