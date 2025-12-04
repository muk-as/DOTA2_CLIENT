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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bSuppressAnimEventSounds; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxSlopeDistance; // 0x_            
            Vector m_vLastSlopeCheckPos; // 0x_            
            bool m_bAnimationUpdateScheduled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x_            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x_            
            bool m_bBuiltRagdoll; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bHasAnimatedMaterialAttributes; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x_
            // float InputSetPlaybackRate; // 0x_
            // CUtlSymbolLarge InputSetBodyGroup; // 0x_
            // bool InputDisableAnimEventSounds; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0x_);
    };
};
