import unreal_engine as ue
from unreal_engine import FVector

from unreal_engine.classes import Actor, Pawn, Character, ProjectileMovementComponent, PawnSensingComponent, StaticMesh
from unreal_engine.classes import StaticMeshComponent, StaticMeshActor, PointLightComponent

world = ue.get_editor_world()
cone2 = world.actor_spawn(StaticMeshActor)
cone2.StaticMeshComponent.StaticMesh = ue.load_object(StaticMesh, '/Game/DicomMeshAssets/1/test')
cone2.set_actor_label('A Better Cone')