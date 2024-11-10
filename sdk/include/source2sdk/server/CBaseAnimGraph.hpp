#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class IChoreoServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9f8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
    // static metadata: MNetworkVarNames "Vector m_vecForce"
    // static metadata: MNetworkVarNames "int32 m_nForceBone"
    // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
    // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
    #pragma pack(push, 1)
    class CBaseAnimGraph : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7b0[0x78]; // 0x7b0
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x829[0x7]; // 0x829
        client::IChoreoServices* m_pChoreoServices; // 0x830        
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x839[0x3]; // 0x839
        float m_flMaxSlopeDistance; // 0x83c        
        Vector m_vLastSlopeCheckPos; // 0x840        
        bool m_bAnimationUpdateScheduled; // 0x84c        
        [[maybe_unused]] std::uint8_t pad_0x84d[0x3]; // 0x84d
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x850        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x85c        
        [[maybe_unused]] std::uint8_t pad_0x860[0x10]; // 0x860
        // metadata: MNetworkEnable
        server::PhysicsRagdollPose_t m_RagdollPose; // 0x870        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x899[0x15f];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x820
        // void CBaseAnimGraphChoreoServicesThink; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // void InputBecomeRagdoll; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0x9f8);
};
