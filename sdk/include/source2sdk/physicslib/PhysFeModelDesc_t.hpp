#pragma once
#include "source2sdk/physicslib/CFeIndexedJiggleBone.hpp"
#include "source2sdk/physicslib/FeAnimStrayRadius_t.hpp"
#include "source2sdk/physicslib/FeAntiTunnelProbe_t.hpp"
#include "source2sdk/physicslib/FeAxialEdgeBend_t.hpp"
#include "source2sdk/physicslib/FeBoxRigid_t.hpp"
#include "source2sdk/physicslib/FeCollisionPlane_t.hpp"
#include "source2sdk/physicslib/FeCtrlOffset_t.hpp"
#include "source2sdk/physicslib/FeCtrlOsOffset_t.hpp"
#include "source2sdk/physicslib/FeCtrlSoftOffset_t.hpp"
#include "source2sdk/physicslib/FeEffectDesc_t.hpp"
#include "source2sdk/physicslib/FeFitMatrix_t.hpp"
#include "source2sdk/physicslib/FeFitWeight_t.hpp"
#include "source2sdk/physicslib/FeFollowNode_t.hpp"
#include "source2sdk/physicslib/FeHingeLimit_t.hpp"
#include "source2sdk/physicslib/FeKelagerBend2_t.hpp"
#include "source2sdk/physicslib/FeMorphLayerDepr_t.hpp"
#include "source2sdk/physicslib/FeNodeBase_t.hpp"
#include "source2sdk/physicslib/FeNodeIntegrator_t.hpp"
#include "source2sdk/physicslib/FeNodeReverseOffset_t.hpp"
#include "source2sdk/physicslib/FeNodeWindBase_t.hpp"
#include "source2sdk/physicslib/FeQuad_t.hpp"
#include "source2sdk/physicslib/FeRigidColliderIndices_t.hpp"
#include "source2sdk/physicslib/FeRodConstraint_t.hpp"
#include "source2sdk/physicslib/FeSDFRigid_t.hpp"
#include "source2sdk/physicslib/FeSimdAnimStrayRadius_t.hpp"
#include "source2sdk/physicslib/FeSimdNodeBase_t.hpp"
#include "source2sdk/physicslib/FeSimdQuad_t.hpp"
#include "source2sdk/physicslib/FeSimdRodConstraintAnim_t.hpp"
#include "source2sdk/physicslib/FeSimdRodConstraint_t.hpp"
#include "source2sdk/physicslib/FeSimdSpringIntegrator_t.hpp"
#include "source2sdk/physicslib/FeSimdTri_t.hpp"
#include "source2sdk/physicslib/FeSphereRigid_t.hpp"
#include "source2sdk/physicslib/FeSpringIntegrator_t.hpp"
#include "source2sdk/physicslib/FeTaperedCapsuleRigid_t.hpp"
#include "source2sdk/physicslib/FeTaperedCapsuleStretch_t.hpp"
#include "source2sdk/physicslib/FeTreeChildren_t.hpp"
#include "source2sdk/physicslib/FeTri_t.hpp"
#include "source2sdk/physicslib/FeTwistConstraint_t.hpp"
#include "source2sdk/physicslib/FeVertexMapDesc_t.hpp"
#include "source2sdk/physicslib/FeWorldCollisionParams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x680
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PhysFeModelDesc_t
    {
    public:
        // m_CtrlHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_CtrlHash;
        char m_CtrlHash[0x18]; // 0x0        
        // m_CtrlName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_CtrlName;
        char m_CtrlName[0x18]; // 0x18        
        uint32_t m_nStaticNodeFlags; // 0x30        
        uint32_t m_nDynamicNodeFlags; // 0x34        
        float m_flLocalForce; // 0x38        
        float m_flLocalRotation; // 0x3c        
        uint16_t m_nNodeCount; // 0x40        
        uint16_t m_nStaticNodes; // 0x42        
        uint16_t m_nRotLockStaticNodes; // 0x44        
        uint16_t m_nFirstPositionDrivenNode; // 0x46        
        uint16_t m_nSimdTriCount1; // 0x48        
        uint16_t m_nSimdTriCount2; // 0x4a        
        uint16_t m_nSimdQuadCount1; // 0x4c        
        uint16_t m_nSimdQuadCount2; // 0x4e        
        uint16_t m_nQuadCount1; // 0x50        
        uint16_t m_nQuadCount2; // 0x52        
        uint16_t m_nTreeDepth; // 0x54        
        uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x56        
        uint16_t m_nRopeCount; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5a[0x6]; // 0x5a
        // m_Ropes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_Ropes;
        char m_Ropes[0x18]; // 0x60        
        // m_NodeBases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeNodeBase_t> m_NodeBases;
        char m_NodeBases[0x18]; // 0x78        
        // m_SimdNodeBases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdNodeBase_t> m_SimdNodeBases;
        char m_SimdNodeBases[0x18]; // 0x90        
        // m_Quads has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeQuad_t> m_Quads;
        char m_Quads[0x18]; // 0xa8        
        // m_SimdQuads has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdQuad_t> m_SimdQuads;
        char m_SimdQuads[0x18]; // 0xc0        
        // m_SimdTris has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdTri_t> m_SimdTris;
        char m_SimdTris[0x18]; // 0xd8        
        // m_SimdRods has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdRodConstraint_t> m_SimdRods;
        char m_SimdRods[0x18]; // 0xf0        
        // m_SimdRodsAnim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdRodConstraintAnim_t> m_SimdRodsAnim;
        char m_SimdRodsAnim[0x18]; // 0x108        
        // m_InitPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CTransform> m_InitPose;
        char m_InitPose[0x18]; // 0x120        
        // m_Rods has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeRodConstraint_t> m_Rods;
        char m_Rods[0x18]; // 0x138        
        // m_Twists has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeTwistConstraint_t> m_Twists;
        char m_Twists[0x18]; // 0x150        
        // m_HingeLimits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeHingeLimit_t> m_HingeLimits;
        char m_HingeLimits[0x18]; // 0x168        
        // m_AntiTunnelProbes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeAntiTunnelProbe_t> m_AntiTunnelProbes;
        char m_AntiTunnelProbes[0x18]; // 0x180        
        // m_AntiTunnelTargetNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_AntiTunnelTargetNodes;
        char m_AntiTunnelTargetNodes[0x18]; // 0x198        
        // m_AxialEdges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeAxialEdgeBend_t> m_AxialEdges;
        char m_AxialEdges[0x18]; // 0x1b0        
        // m_NodeInvMasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_NodeInvMasses;
        char m_NodeInvMasses[0x18]; // 0x1c8        
        // m_CtrlOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeCtrlOffset_t> m_CtrlOffsets;
        char m_CtrlOffsets[0x18]; // 0x1e0        
        // m_CtrlOsOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeCtrlOsOffset_t> m_CtrlOsOffsets;
        char m_CtrlOsOffsets[0x18]; // 0x1f8        
        // m_FollowNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeFollowNode_t> m_FollowNodes;
        char m_FollowNodes[0x18]; // 0x210        
        // m_CollisionPlanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeCollisionPlane_t> m_CollisionPlanes;
        char m_CollisionPlanes[0x18]; // 0x228        
        // m_NodeIntegrator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeNodeIntegrator_t> m_NodeIntegrator;
        char m_NodeIntegrator[0x18]; // 0x240        
        // m_SpringIntegrator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSpringIntegrator_t> m_SpringIntegrator;
        char m_SpringIntegrator[0x18]; // 0x258        
        // m_SimdSpringIntegrator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdSpringIntegrator_t> m_SimdSpringIntegrator;
        char m_SimdSpringIntegrator[0x18]; // 0x270        
        // m_WorldCollisionParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeWorldCollisionParams_t> m_WorldCollisionParams;
        char m_WorldCollisionParams[0x18]; // 0x288        
        // m_LegacyStretchForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_LegacyStretchForce;
        char m_LegacyStretchForce[0x18]; // 0x2a0        
        // m_NodeCollisionRadii has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_NodeCollisionRadii;
        char m_NodeCollisionRadii[0x18]; // 0x2b8        
        // m_DynNodeFriction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_DynNodeFriction;
        char m_DynNodeFriction[0x18]; // 0x2d0        
        // m_LocalRotation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_LocalRotation;
        char m_LocalRotation[0x18]; // 0x2e8        
        // m_LocalForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_LocalForce;
        char m_LocalForce[0x18]; // 0x300        
        // m_TaperedCapsuleStretches has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeTaperedCapsuleStretch_t> m_TaperedCapsuleStretches;
        char m_TaperedCapsuleStretches[0x18]; // 0x318        
        // m_TaperedCapsuleRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeTaperedCapsuleRigid_t> m_TaperedCapsuleRigids;
        char m_TaperedCapsuleRigids[0x18]; // 0x330        
        // m_SphereRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSphereRigid_t> m_SphereRigids;
        char m_SphereRigids[0x18]; // 0x348        
        // m_WorldCollisionNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_WorldCollisionNodes;
        char m_WorldCollisionNodes[0x18]; // 0x360        
        // m_TreeParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_TreeParents;
        char m_TreeParents[0x18]; // 0x378        
        // m_TreeCollisionMasks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_TreeCollisionMasks;
        char m_TreeCollisionMasks[0x18]; // 0x390        
        // m_TreeChildren has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeTreeChildren_t> m_TreeChildren;
        char m_TreeChildren[0x18]; // 0x3a8        
        // m_FreeNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_FreeNodes;
        char m_FreeNodes[0x18]; // 0x3c0        
        // m_FitMatrices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeFitMatrix_t> m_FitMatrices;
        char m_FitMatrices[0x18]; // 0x3d8        
        // m_FitWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeFitWeight_t> m_FitWeights;
        char m_FitWeights[0x18]; // 0x3f0        
        // m_ReverseOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeNodeReverseOffset_t> m_ReverseOffsets;
        char m_ReverseOffsets[0x18]; // 0x408        
        // m_AnimStrayRadii has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeAnimStrayRadius_t> m_AnimStrayRadii;
        char m_AnimStrayRadii[0x18]; // 0x420        
        // m_SimdAnimStrayRadii has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSimdAnimStrayRadius_t> m_SimdAnimStrayRadii;
        char m_SimdAnimStrayRadii[0x18]; // 0x438        
        // m_KelagerBends has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeKelagerBend2_t> m_KelagerBends;
        char m_KelagerBends[0x18]; // 0x450        
        // m_CtrlSoftOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeCtrlSoftOffset_t> m_CtrlSoftOffsets;
        char m_CtrlSoftOffsets[0x18]; // 0x468        
        // m_JiggleBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::CFeIndexedJiggleBone> m_JiggleBones;
        char m_JiggleBones[0x18]; // 0x480        
        // m_SourceElems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_SourceElems;
        char m_SourceElems[0x18]; // 0x498        
        // m_GoalDampedSpringIntegrators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_GoalDampedSpringIntegrators;
        char m_GoalDampedSpringIntegrators[0x18]; // 0x4b0        
        // m_Tris has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeTri_t> m_Tris;
        char m_Tris[0x18]; // 0x4c8        
        uint16_t m_nTriCount1; // 0x4e0        
        uint16_t m_nTriCount2; // 0x4e2        
        uint8_t m_nReservedUint8; // 0x4e4        
        uint8_t m_nExtraPressureIterations; // 0x4e5        
        uint8_t m_nExtraGoalIterations; // 0x4e6        
        uint8_t m_nExtraIterations; // 0x4e7        
        // m_SDFRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeSDFRigid_t> m_SDFRigids;
        char m_SDFRigids[0x18]; // 0x4e8        
        // m_BoxRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeBoxRigid_t> m_BoxRigids;
        char m_BoxRigids[0x18]; // 0x500        
        // m_DynNodeVertexSet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_DynNodeVertexSet;
        char m_DynNodeVertexSet[0x18]; // 0x518        
        // m_VertexSetNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_VertexSetNames;
        char m_VertexSetNames[0x18]; // 0x530        
        // m_RigidColliderPriorities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeRigidColliderIndices_t> m_RigidColliderPriorities;
        char m_RigidColliderPriorities[0x18]; // 0x548        
        // m_MorphLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeMorphLayerDepr_t> m_MorphLayers;
        char m_MorphLayers[0x18]; // 0x560        
        // m_MorphSetData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_MorphSetData;
        char m_MorphSetData[0x18]; // 0x578        
        // m_VertexMaps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeVertexMapDesc_t> m_VertexMaps;
        char m_VertexMaps[0x18]; // 0x590        
        // m_VertexMapValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_VertexMapValues;
        char m_VertexMapValues[0x18]; // 0x5a8        
        // m_Effects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeEffectDesc_t> m_Effects;
        char m_Effects[0x18]; // 0x5c0        
        // m_LockToParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeCtrlOffset_t> m_LockToParent;
        char m_LockToParent[0x18]; // 0x5d8        
        // m_LockToGoal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_LockToGoal;
        char m_LockToGoal[0x18]; // 0x5f0        
        // m_SkelParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_SkelParents;
        char m_SkelParents[0x18]; // 0x608        
        // m_DynNodeWindBases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::FeNodeWindBase_t> m_DynNodeWindBases;
        char m_DynNodeWindBases[0x18]; // 0x620        
        float m_flInternalPressure; // 0x638        
        float m_flDefaultTimeDilation; // 0x63c        
        float m_flWindage; // 0x640        
        float m_flWindDrag; // 0x644        
        float m_flDefaultSurfaceStretch; // 0x648        
        float m_flDefaultThreadStretch; // 0x64c        
        float m_flDefaultGravityScale; // 0x650        
        float m_flDefaultVelAirDrag; // 0x654        
        float m_flDefaultExpAirDrag; // 0x658        
        float m_flDefaultVelQuadAirDrag; // 0x65c        
        float m_flDefaultExpQuadAirDrag; // 0x660        
        float m_flRodVelocitySmoothRate; // 0x664        
        float m_flQuadVelocitySmoothRate; // 0x668        
        float m_flAddWorldCollisionRadius; // 0x66c        
        float m_flDefaultVolumetricSolveAmount; // 0x670        
        float m_flMotionSmoothCDT; // 0x674        
        float m_flLocalDrag1; // 0x678        
        uint16_t m_nRodVelocitySmoothIterations; // 0x67c        
        uint16_t m_nQuadVelocitySmoothIterations; // 0x67e        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PhysFeModelDesc_t, m_CtrlHash) == 0x0);
    static_assert(offsetof(PhysFeModelDesc_t, m_CtrlName) == 0x18);
    static_assert(offsetof(PhysFeModelDesc_t, m_nStaticNodeFlags) == 0x30);
    static_assert(offsetof(PhysFeModelDesc_t, m_nDynamicNodeFlags) == 0x34);
    static_assert(offsetof(PhysFeModelDesc_t, m_flLocalForce) == 0x38);
    static_assert(offsetof(PhysFeModelDesc_t, m_flLocalRotation) == 0x3c);
    static_assert(offsetof(PhysFeModelDesc_t, m_nNodeCount) == 0x40);
    static_assert(offsetof(PhysFeModelDesc_t, m_nStaticNodes) == 0x42);
    static_assert(offsetof(PhysFeModelDesc_t, m_nRotLockStaticNodes) == 0x44);
    static_assert(offsetof(PhysFeModelDesc_t, m_nFirstPositionDrivenNode) == 0x46);
    static_assert(offsetof(PhysFeModelDesc_t, m_nSimdTriCount1) == 0x48);
    static_assert(offsetof(PhysFeModelDesc_t, m_nSimdTriCount2) == 0x4a);
    static_assert(offsetof(PhysFeModelDesc_t, m_nSimdQuadCount1) == 0x4c);
    static_assert(offsetof(PhysFeModelDesc_t, m_nSimdQuadCount2) == 0x4e);
    static_assert(offsetof(PhysFeModelDesc_t, m_nQuadCount1) == 0x50);
    static_assert(offsetof(PhysFeModelDesc_t, m_nQuadCount2) == 0x52);
    static_assert(offsetof(PhysFeModelDesc_t, m_nTreeDepth) == 0x54);
    static_assert(offsetof(PhysFeModelDesc_t, m_nNodeBaseJiggleboneDependsCount) == 0x56);
    static_assert(offsetof(PhysFeModelDesc_t, m_nRopeCount) == 0x58);
    static_assert(offsetof(PhysFeModelDesc_t, m_Ropes) == 0x60);
    static_assert(offsetof(PhysFeModelDesc_t, m_NodeBases) == 0x78);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdNodeBases) == 0x90);
    static_assert(offsetof(PhysFeModelDesc_t, m_Quads) == 0xa8);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdQuads) == 0xc0);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdTris) == 0xd8);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdRods) == 0xf0);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdRodsAnim) == 0x108);
    static_assert(offsetof(PhysFeModelDesc_t, m_InitPose) == 0x120);
    static_assert(offsetof(PhysFeModelDesc_t, m_Rods) == 0x138);
    static_assert(offsetof(PhysFeModelDesc_t, m_Twists) == 0x150);
    static_assert(offsetof(PhysFeModelDesc_t, m_HingeLimits) == 0x168);
    static_assert(offsetof(PhysFeModelDesc_t, m_AntiTunnelProbes) == 0x180);
    static_assert(offsetof(PhysFeModelDesc_t, m_AntiTunnelTargetNodes) == 0x198);
    static_assert(offsetof(PhysFeModelDesc_t, m_AxialEdges) == 0x1b0);
    static_assert(offsetof(PhysFeModelDesc_t, m_NodeInvMasses) == 0x1c8);
    static_assert(offsetof(PhysFeModelDesc_t, m_CtrlOffsets) == 0x1e0);
    static_assert(offsetof(PhysFeModelDesc_t, m_CtrlOsOffsets) == 0x1f8);
    static_assert(offsetof(PhysFeModelDesc_t, m_FollowNodes) == 0x210);
    static_assert(offsetof(PhysFeModelDesc_t, m_CollisionPlanes) == 0x228);
    static_assert(offsetof(PhysFeModelDesc_t, m_NodeIntegrator) == 0x240);
    static_assert(offsetof(PhysFeModelDesc_t, m_SpringIntegrator) == 0x258);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdSpringIntegrator) == 0x270);
    static_assert(offsetof(PhysFeModelDesc_t, m_WorldCollisionParams) == 0x288);
    static_assert(offsetof(PhysFeModelDesc_t, m_LegacyStretchForce) == 0x2a0);
    static_assert(offsetof(PhysFeModelDesc_t, m_NodeCollisionRadii) == 0x2b8);
    static_assert(offsetof(PhysFeModelDesc_t, m_DynNodeFriction) == 0x2d0);
    static_assert(offsetof(PhysFeModelDesc_t, m_LocalRotation) == 0x2e8);
    static_assert(offsetof(PhysFeModelDesc_t, m_LocalForce) == 0x300);
    static_assert(offsetof(PhysFeModelDesc_t, m_TaperedCapsuleStretches) == 0x318);
    static_assert(offsetof(PhysFeModelDesc_t, m_TaperedCapsuleRigids) == 0x330);
    static_assert(offsetof(PhysFeModelDesc_t, m_SphereRigids) == 0x348);
    static_assert(offsetof(PhysFeModelDesc_t, m_WorldCollisionNodes) == 0x360);
    static_assert(offsetof(PhysFeModelDesc_t, m_TreeParents) == 0x378);
    static_assert(offsetof(PhysFeModelDesc_t, m_TreeCollisionMasks) == 0x390);
    static_assert(offsetof(PhysFeModelDesc_t, m_TreeChildren) == 0x3a8);
    static_assert(offsetof(PhysFeModelDesc_t, m_FreeNodes) == 0x3c0);
    static_assert(offsetof(PhysFeModelDesc_t, m_FitMatrices) == 0x3d8);
    static_assert(offsetof(PhysFeModelDesc_t, m_FitWeights) == 0x3f0);
    static_assert(offsetof(PhysFeModelDesc_t, m_ReverseOffsets) == 0x408);
    static_assert(offsetof(PhysFeModelDesc_t, m_AnimStrayRadii) == 0x420);
    static_assert(offsetof(PhysFeModelDesc_t, m_SimdAnimStrayRadii) == 0x438);
    static_assert(offsetof(PhysFeModelDesc_t, m_KelagerBends) == 0x450);
    static_assert(offsetof(PhysFeModelDesc_t, m_CtrlSoftOffsets) == 0x468);
    static_assert(offsetof(PhysFeModelDesc_t, m_JiggleBones) == 0x480);
    static_assert(offsetof(PhysFeModelDesc_t, m_SourceElems) == 0x498);
    static_assert(offsetof(PhysFeModelDesc_t, m_GoalDampedSpringIntegrators) == 0x4b0);
    static_assert(offsetof(PhysFeModelDesc_t, m_Tris) == 0x4c8);
    static_assert(offsetof(PhysFeModelDesc_t, m_nTriCount1) == 0x4e0);
    static_assert(offsetof(PhysFeModelDesc_t, m_nTriCount2) == 0x4e2);
    static_assert(offsetof(PhysFeModelDesc_t, m_nReservedUint8) == 0x4e4);
    static_assert(offsetof(PhysFeModelDesc_t, m_nExtraPressureIterations) == 0x4e5);
    static_assert(offsetof(PhysFeModelDesc_t, m_nExtraGoalIterations) == 0x4e6);
    static_assert(offsetof(PhysFeModelDesc_t, m_nExtraIterations) == 0x4e7);
    static_assert(offsetof(PhysFeModelDesc_t, m_SDFRigids) == 0x4e8);
    static_assert(offsetof(PhysFeModelDesc_t, m_BoxRigids) == 0x500);
    static_assert(offsetof(PhysFeModelDesc_t, m_DynNodeVertexSet) == 0x518);
    static_assert(offsetof(PhysFeModelDesc_t, m_VertexSetNames) == 0x530);
    static_assert(offsetof(PhysFeModelDesc_t, m_RigidColliderPriorities) == 0x548);
    static_assert(offsetof(PhysFeModelDesc_t, m_MorphLayers) == 0x560);
    static_assert(offsetof(PhysFeModelDesc_t, m_MorphSetData) == 0x578);
    static_assert(offsetof(PhysFeModelDesc_t, m_VertexMaps) == 0x590);
    static_assert(offsetof(PhysFeModelDesc_t, m_VertexMapValues) == 0x5a8);
    static_assert(offsetof(PhysFeModelDesc_t, m_Effects) == 0x5c0);
    static_assert(offsetof(PhysFeModelDesc_t, m_LockToParent) == 0x5d8);
    static_assert(offsetof(PhysFeModelDesc_t, m_LockToGoal) == 0x5f0);
    static_assert(offsetof(PhysFeModelDesc_t, m_SkelParents) == 0x608);
    static_assert(offsetof(PhysFeModelDesc_t, m_DynNodeWindBases) == 0x620);
    static_assert(offsetof(PhysFeModelDesc_t, m_flInternalPressure) == 0x638);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultTimeDilation) == 0x63c);
    static_assert(offsetof(PhysFeModelDesc_t, m_flWindage) == 0x640);
    static_assert(offsetof(PhysFeModelDesc_t, m_flWindDrag) == 0x644);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultSurfaceStretch) == 0x648);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultThreadStretch) == 0x64c);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultGravityScale) == 0x650);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultVelAirDrag) == 0x654);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultExpAirDrag) == 0x658);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultVelQuadAirDrag) == 0x65c);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultExpQuadAirDrag) == 0x660);
    static_assert(offsetof(PhysFeModelDesc_t, m_flRodVelocitySmoothRate) == 0x664);
    static_assert(offsetof(PhysFeModelDesc_t, m_flQuadVelocitySmoothRate) == 0x668);
    static_assert(offsetof(PhysFeModelDesc_t, m_flAddWorldCollisionRadius) == 0x66c);
    static_assert(offsetof(PhysFeModelDesc_t, m_flDefaultVolumetricSolveAmount) == 0x670);
    static_assert(offsetof(PhysFeModelDesc_t, m_flMotionSmoothCDT) == 0x674);
    static_assert(offsetof(PhysFeModelDesc_t, m_flLocalDrag1) == 0x678);
    static_assert(offsetof(PhysFeModelDesc_t, m_nRodVelocitySmoothIterations) == 0x67c);
    static_assert(offsetof(PhysFeModelDesc_t, m_nQuadVelocitySmoothIterations) == 0x67e);
    
    static_assert(sizeof(PhysFeModelDesc_t) == 0x680);
};
