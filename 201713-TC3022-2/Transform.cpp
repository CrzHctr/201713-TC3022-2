#include "Transform.h"

Transform::Transform()
{
	_position = glm::vec3(0.0f, 0.0f, 0.0f);
	_rotation = glm::quat(glm::vec3(0.0f, 0.0f, 0.0f));
	_scale = glm::vec3(1.0f, 1.0f, 1.0f);

	_modelMatrix = glm::mat4(1.0f);

	_forward = WORLD_FORWARD_VECTOR;
	_up = WORLD_UP_VECTOR;
	_right = WORLD_RIGHT_VECTOR;
}

glm::mat4 Transform::GetModelMatrix()
{
	return _modelMatrix;
}

glm::vec3 Transform::GetPosition()
{
	return _position;
}

glm::quat Transform::GetRotation()
{
	return _rotation;
}

glm::vec3 Transform::GetScale()
{
	return _scale;
}

