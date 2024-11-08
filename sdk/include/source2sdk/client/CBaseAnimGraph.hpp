#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa80
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
    class CBaseAnimGraph : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x820[0x78]; // 0x820
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x899[0x1]; // 0x899
        bool m_bSuppressAnimEventSounds; // 0x89a        
        [[maybe_unused]] std::uint8_t pad_0x89b[0xd]; // 0x89b
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8a9[0x3]; // 0x8a9
        float m_flMaxSlopeDistance; // 0x8ac        
        Vector m_vLastSlopeCheckPos; // 0x8b0        
        bool m_bAnimationUpdateScheduled; // 0x8bc        
        [[maybe_unused]] std::uint8_t pad_0x8bd[0x3]; // 0x8bd
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x8c0        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x8cc        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x8d0        
        bool m_bBuiltRagdoll; // 0x8d8        
        [[maybe_unused]] std::uint8_t pad_0x8d9[0x17]; // 0x8d9
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t m_RagdollPose; // 0x8f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x938        
        [[maybe_unused]] std::uint8_t pad_0x939[0xf]; // 0x939
        bool m_bHasAnimatedMaterialAttributes; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x949[0x137];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x890
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xa80);
};
