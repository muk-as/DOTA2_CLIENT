#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/CFeIndexedJiggleBone.hpp"
#include "source2sdk/physicslib/FeAnimStrayRadius_t.hpp"
#include "source2sdk/physicslib/FeAntiTunnelProbe_t.hpp"
#include "source2sdk/physicslib/FeAxialEdgeBend_t.hpp"
#include "source2sdk/physicslib/FeBoxRigid_t.hpp"
#include "source2sdk/physicslib/FeCollisionPlane_t.hpp"
#include "source2sdk/physicslib/FeCtrlOffset_t.hpp"
#include "source2sdk/physicslib/FeCtrlOsOffset_t.hpp"
#include "source2sdk/physicslib/FeCtrlSoftOffset_t.hpp"
#include "source2sdk/physicslib/FeDynKinLink_t.hpp"
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
#include "source2sdk/physicslib/FeNodeStrayBox_t.hpp"
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

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PhysFeModelDesc_t
        {
        public:
            // m_CtrlHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_CtrlHash;
            char m_CtrlHash[0x_]; // 0x_            
            // m_CtrlName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_CtrlName;
            char m_CtrlName[0x_]; // 0x_            
            std::uint32_t m_nStaticNodeFlags; // 0x_            
            std::uint32_t m_nDynamicNodeFlags; // 0x_            
            float m_flLocalForce; // 0x_            
            float m_flLocalRotation; // 0x_            
            std::uint16_t m_nNodeCount; // 0x_            
            std::uint16_t m_nStaticNodes; // 0x_            
            std::uint16_t m_nRotLockStaticNodes; // 0x_            
            std::uint16_t m_nFirstPositionDrivenNode; // 0x_            
            std::uint16_t m_nSimdTriCount1; // 0x_            
            std::uint16_t m_nSimdTriCount2; // 0x_            
            std::uint16_t m_nSimdQuadCount1; // 0x_            
            std::uint16_t m_nSimdQuadCount2; // 0x_            
            std::uint16_t m_nQuadCount1; // 0x_            
            std::uint16_t m_nQuadCount2; // 0x_            
            std::uint16_t m_nTreeDepth; // 0x_            
            std::uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x_            
            std::uint16_t m_nRopeCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Ropes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_Ropes;
            char m_Ropes[0x_]; // 0x_            
            // m_NodeBases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeNodeBase_t> m_NodeBases;
            char m_NodeBases[0x_]; // 0x_            
            // m_SimdNodeBases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdNodeBase_t> m_SimdNodeBases;
            char m_SimdNodeBases[0x_]; // 0x_            
            // m_Quads has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeQuad_t> m_Quads;
            char m_Quads[0x_]; // 0x_            
            // m_SimdQuads has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdQuad_t> m_SimdQuads;
            char m_SimdQuads[0x_]; // 0x_            
            // m_SimdTris has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdTri_t> m_SimdTris;
            char m_SimdTris[0x_]; // 0x_            
            // m_SimdRods has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdRodConstraint_t> m_SimdRods;
            char m_SimdRods[0x_]; // 0x_            
            // m_SimdRodsAnim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdRodConstraintAnim_t> m_SimdRodsAnim;
            char m_SimdRodsAnim[0x_]; // 0x_            
            // m_InitPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_InitPose;
            char m_InitPose[0x_]; // 0x_            
            // m_Rods has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeRodConstraint_t> m_Rods;
            char m_Rods[0x_]; // 0x_            
            // m_Twists has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeTwistConstraint_t> m_Twists;
            char m_Twists[0x_]; // 0x_            
            // m_HingeLimits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeHingeLimit_t> m_HingeLimits;
            char m_HingeLimits[0x_]; // 0x_            
            // m_AntiTunnelBytecode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_AntiTunnelBytecode;
            char m_AntiTunnelBytecode[0x_]; // 0x_            
            // m_DynKinLinks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeDynKinLink_t> m_DynKinLinks;
            char m_DynKinLinks[0x_]; // 0x_            
            // m_AntiTunnelProbes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeAntiTunnelProbe_t> m_AntiTunnelProbes;
            char m_AntiTunnelProbes[0x_]; // 0x_            
            // m_AntiTunnelTargetNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_AntiTunnelTargetNodes;
            char m_AntiTunnelTargetNodes[0x_]; // 0x_            
            // m_NodeStrayBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeNodeStrayBox_t> m_NodeStrayBoxes;
            char m_NodeStrayBoxes[0x_]; // 0x_            
            // m_AxialEdges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeAxialEdgeBend_t> m_AxialEdges;
            char m_AxialEdges[0x_]; // 0x_            
            // m_NodeInvMasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_NodeInvMasses;
            char m_NodeInvMasses[0x_]; // 0x_            
            // m_CtrlOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeCtrlOffset_t> m_CtrlOffsets;
            char m_CtrlOffsets[0x_]; // 0x_            
            // m_CtrlOsOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeCtrlOsOffset_t> m_CtrlOsOffsets;
            char m_CtrlOsOffsets[0x_]; // 0x_            
            // m_FollowNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeFollowNode_t> m_FollowNodes;
            char m_FollowNodes[0x_]; // 0x_            
            // m_CollisionPlanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeCollisionPlane_t> m_CollisionPlanes;
            char m_CollisionPlanes[0x_]; // 0x_            
            // m_NodeIntegrator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeNodeIntegrator_t> m_NodeIntegrator;
            char m_NodeIntegrator[0x_]; // 0x_            
            // m_SpringIntegrator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSpringIntegrator_t> m_SpringIntegrator;
            char m_SpringIntegrator[0x_]; // 0x_            
            // m_SimdSpringIntegrator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdSpringIntegrator_t> m_SimdSpringIntegrator;
            char m_SimdSpringIntegrator[0x_]; // 0x_            
            // m_WorldCollisionParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeWorldCollisionParams_t> m_WorldCollisionParams;
            char m_WorldCollisionParams[0x_]; // 0x_            
            // m_LegacyStretchForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_LegacyStretchForce;
            char m_LegacyStretchForce[0x_]; // 0x_            
            // m_NodeCollisionRadii has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_NodeCollisionRadii;
            char m_NodeCollisionRadii[0x_]; // 0x_            
            // m_DynNodeFriction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_DynNodeFriction;
            char m_DynNodeFriction[0x_]; // 0x_            
            // m_LocalRotation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_LocalRotation;
            char m_LocalRotation[0x_]; // 0x_            
            // m_LocalForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_LocalForce;
            char m_LocalForce[0x_]; // 0x_            
            // m_TaperedCapsuleStretches has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeTaperedCapsuleStretch_t> m_TaperedCapsuleStretches;
            char m_TaperedCapsuleStretches[0x_]; // 0x_            
            // m_TaperedCapsuleRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeTaperedCapsuleRigid_t> m_TaperedCapsuleRigids;
            char m_TaperedCapsuleRigids[0x_]; // 0x_            
            // m_SphereRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSphereRigid_t> m_SphereRigids;
            char m_SphereRigids[0x_]; // 0x_            
            // m_WorldCollisionNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_WorldCollisionNodes;
            char m_WorldCollisionNodes[0x_]; // 0x_            
            // m_TreeParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_TreeParents;
            char m_TreeParents[0x_]; // 0x_            
            // m_TreeCollisionMasks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_TreeCollisionMasks;
            char m_TreeCollisionMasks[0x_]; // 0x_            
            // m_TreeChildren has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeTreeChildren_t> m_TreeChildren;
            char m_TreeChildren[0x_]; // 0x_            
            // m_FreeNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_FreeNodes;
            char m_FreeNodes[0x_]; // 0x_            
            // m_FitMatrices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeFitMatrix_t> m_FitMatrices;
            char m_FitMatrices[0x_]; // 0x_            
            // m_FitWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeFitWeight_t> m_FitWeights;
            char m_FitWeights[0x_]; // 0x_            
            // m_ReverseOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeNodeReverseOffset_t> m_ReverseOffsets;
            char m_ReverseOffsets[0x_]; // 0x_            
            // m_AnimStrayRadii has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeAnimStrayRadius_t> m_AnimStrayRadii;
            char m_AnimStrayRadii[0x_]; // 0x_            
            // m_SimdAnimStrayRadii has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSimdAnimStrayRadius_t> m_SimdAnimStrayRadii;
            char m_SimdAnimStrayRadii[0x_]; // 0x_            
            // m_KelagerBends has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeKelagerBend2_t> m_KelagerBends;
            char m_KelagerBends[0x_]; // 0x_            
            // m_CtrlSoftOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeCtrlSoftOffset_t> m_CtrlSoftOffsets;
            char m_CtrlSoftOffsets[0x_]; // 0x_            
            // m_JiggleBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::CFeIndexedJiggleBone> m_JiggleBones;
            char m_JiggleBones[0x_]; // 0x_            
            // m_SourceElems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_SourceElems;
            char m_SourceElems[0x_]; // 0x_            
            // m_GoalDampedSpringIntegrators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_GoalDampedSpringIntegrators;
            char m_GoalDampedSpringIntegrators[0x_]; // 0x_            
            // m_Tris has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeTri_t> m_Tris;
            char m_Tris[0x_]; // 0x_            
            std::uint16_t m_nTriCount1; // 0x_            
            std::uint16_t m_nTriCount2; // 0x_            
            std::uint8_t m_nReservedUint8; // 0x_            
            std::uint8_t m_nExtraPressureIterations; // 0x_            
            std::uint8_t m_nExtraGoalIterations; // 0x_            
            std::uint8_t m_nExtraIterations; // 0x_            
            // m_SDFRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeSDFRigid_t> m_SDFRigids;
            char m_SDFRigids[0x_]; // 0x_            
            // m_BoxRigids has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeBoxRigid_t> m_BoxRigids;
            char m_BoxRigids[0x_]; // 0x_            
            // m_DynNodeVertexSet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_DynNodeVertexSet;
            char m_DynNodeVertexSet[0x_]; // 0x_            
            // m_VertexSetNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_VertexSetNames;
            char m_VertexSetNames[0x_]; // 0x_            
            // m_RigidColliderPriorities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeRigidColliderIndices_t> m_RigidColliderPriorities;
            char m_RigidColliderPriorities[0x_]; // 0x_            
            // m_MorphLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeMorphLayerDepr_t> m_MorphLayers;
            char m_MorphLayers[0x_]; // 0x_            
            // m_MorphSetData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_MorphSetData;
            char m_MorphSetData[0x_]; // 0x_            
            // m_VertexMaps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeVertexMapDesc_t> m_VertexMaps;
            char m_VertexMaps[0x_]; // 0x_            
            // m_VertexMapValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_VertexMapValues;
            char m_VertexMapValues[0x_]; // 0x_            
            // m_Effects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeEffectDesc_t> m_Effects;
            char m_Effects[0x_]; // 0x_            
            // m_LockToParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeCtrlOffset_t> m_LockToParent;
            char m_LockToParent[0x_]; // 0x_            
            // m_LockToGoal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_LockToGoal;
            char m_LockToGoal[0x_]; // 0x_            
            // m_SkelParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_SkelParents;
            char m_SkelParents[0x_]; // 0x_            
            // m_DynNodeWindBases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::FeNodeWindBase_t> m_DynNodeWindBases;
            char m_DynNodeWindBases[0x_]; // 0x_            
            float m_flInternalPressure; // 0x_            
            float m_flDefaultTimeDilation; // 0x_            
            float m_flWindage; // 0x_            
            float m_flWindDrag; // 0x_            
            float m_flDefaultSurfaceStretch; // 0x_            
            float m_flDefaultThreadStretch; // 0x_            
            float m_flDefaultGravityScale; // 0x_            
            float m_flDefaultVelAirDrag; // 0x_            
            float m_flDefaultExpAirDrag; // 0x_            
            float m_flDefaultVelQuadAirDrag; // 0x_            
            float m_flDefaultExpQuadAirDrag; // 0x_            
            float m_flRodVelocitySmoothRate; // 0x_            
            float m_flQuadVelocitySmoothRate; // 0x_            
            float m_flAddWorldCollisionRadius; // 0x_            
            float m_flDefaultVolumetricSolveAmount; // 0x_            
            float m_flMotionSmoothCDT; // 0x_            
            float m_flLocalDrag1; // 0x_            
            std::uint16_t m_nRodVelocitySmoothIterations; // 0x_            
            std::uint16_t m_nQuadVelocitySmoothIterations; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_CtrlHash) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_CtrlName) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nStaticNodeFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nDynamicNodeFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flLocalForce) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flLocalRotation) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nNodeCount) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nStaticNodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nRotLockStaticNodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nFirstPositionDrivenNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nSimdTriCount1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nSimdTriCount2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nSimdQuadCount1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nSimdQuadCount2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nQuadCount1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nQuadCount2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nTreeDepth) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nNodeBaseJiggleboneDependsCount) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nRopeCount) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_Ropes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_NodeBases) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdNodeBases) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_Quads) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdQuads) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdTris) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdRods) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdRodsAnim) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_InitPose) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_Rods) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_Twists) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_HingeLimits) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_AntiTunnelBytecode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_DynKinLinks) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_AntiTunnelProbes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_AntiTunnelTargetNodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_NodeStrayBoxes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_AxialEdges) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_NodeInvMasses) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_CtrlOffsets) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_CtrlOsOffsets) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_FollowNodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_CollisionPlanes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_NodeIntegrator) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SpringIntegrator) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdSpringIntegrator) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_WorldCollisionParams) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_LegacyStretchForce) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_NodeCollisionRadii) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_DynNodeFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_LocalRotation) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_LocalForce) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_TaperedCapsuleStretches) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_TaperedCapsuleRigids) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SphereRigids) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_WorldCollisionNodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_TreeParents) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_TreeCollisionMasks) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_TreeChildren) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_FreeNodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_FitMatrices) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_FitWeights) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_ReverseOffsets) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_AnimStrayRadii) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SimdAnimStrayRadii) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_KelagerBends) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_CtrlSoftOffsets) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_JiggleBones) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SourceElems) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_GoalDampedSpringIntegrators) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_Tris) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nTriCount1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nTriCount2) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nReservedUint8) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nExtraPressureIterations) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nExtraGoalIterations) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nExtraIterations) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SDFRigids) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_BoxRigids) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_DynNodeVertexSet) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_VertexSetNames) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_RigidColliderPriorities) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_MorphLayers) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_MorphSetData) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_VertexMaps) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_VertexMapValues) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_Effects) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_LockToParent) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_LockToGoal) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_SkelParents) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_DynNodeWindBases) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flInternalPressure) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultTimeDilation) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flWindage) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flWindDrag) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultSurfaceStretch) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultThreadStretch) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultGravityScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultVelAirDrag) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultExpAirDrag) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultVelQuadAirDrag) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultExpQuadAirDrag) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flRodVelocitySmoothRate) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flQuadVelocitySmoothRate) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flAddWorldCollisionRadius) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flDefaultVolumetricSolveAmount) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flMotionSmoothCDT) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_flLocalDrag1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nRodVelocitySmoothIterations) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::PhysFeModelDesc_t, m_nQuadVelocitySmoothIterations) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::PhysFeModelDesc_t) == 0x_);
    };
};
