#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0998[0x80]; // 0x998
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0xa18            
            uint8_t _pad0a19[0x1]; // 0xa19
            bool m_bSuppressAnimEventSounds; // 0xa1a            
            uint8_t _pad0a1b[0xd]; // 0xa1b
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xa28            
            uint8_t _pad0a29[0x3]; // 0xa29
            float m_flMaxSlopeDistance; // 0xa2c            
            Vector m_vLastSlopeCheckPos; // 0xa30            
            bool m_bAnimationUpdateScheduled; // 0xa3c            
            uint8_t _pad0a3d[0x3]; // 0xa3d
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0xa40            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0xa4c            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xa50            
            bool m_bBuiltRagdoll; // 0xa58            
            uint8_t _pad0a59[0x17]; // 0xa59
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xa70            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0xab8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0xab9            
            uint8_t _pad0aba[0xe]; // 0xaba
            bool m_bHasAnimatedMaterialAttributes; // 0xac8            
            uint8_t _pad0ac9[0x177];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0xa10
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xc40);
    };
};
