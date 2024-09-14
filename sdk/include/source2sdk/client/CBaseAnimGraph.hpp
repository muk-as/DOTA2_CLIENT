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
    // Size: 0xa38
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x78]; // 0x7d8
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x851[0x1]; // 0x851
        bool m_bSuppressAnimEventSounds; // 0x852        
        [[maybe_unused]] std::uint8_t pad_0x853[0xd]; // 0x853
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x861[0x3]; // 0x861
        float m_flMaxSlopeDistance; // 0x864        
        Vector m_vLastSlopeCheckPos; // 0x868        
        bool m_bAnimationUpdateScheduled; // 0x874        
        [[maybe_unused]] std::uint8_t pad_0x875[0x3]; // 0x875
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x878        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x884        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x888        
        bool m_bBuiltRagdoll; // 0x890        
        [[maybe_unused]] std::uint8_t pad_0x891[0x17]; // 0x891
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t m_RagdollPose; // 0x8a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x8f0        
        [[maybe_unused]] std::uint8_t pad_0x8f1[0xf]; // 0x8f1
        bool m_bHasAnimatedMaterialAttributes; // 0x900        
        [[maybe_unused]] std::uint8_t pad_0x901[0x137];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x848
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xa38);
};
