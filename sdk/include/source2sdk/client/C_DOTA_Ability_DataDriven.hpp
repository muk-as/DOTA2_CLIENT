#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x718
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_DataDriven : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bProcsMagicStick; // 0x680            
            bool m_bIsSharedWithTeammates; // 0x681            
            bool m_bCastFilterRejectCaster; // 0x682            
            uint8_t _pad0683[0x1]; // 0x683
            float m_fAOERadius; // 0x684            
            std::int32_t m_CastAnimation; // 0x688            
            uint8_t _pad068c[0x4]; // 0x68c
            // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
            char m_ModifierKVDescriptions[0x18]; // 0x690            
            KeyValues* m_pOnChannelFinishKV; // 0x6a8            
            KeyValues* m_pOnChannelSucceededKV; // 0x6b0            
            KeyValues* m_pOnChannelInterruptedKV; // 0x6b8            
            KeyValues* m_pOnOwnerSpawnedKV; // 0x6c0            
            KeyValues* m_pOnOwnerDiedKV; // 0x6c8            
            KeyValues* m_pOnUpgradeKV; // 0x6d0            
            KeyValues* m_pOnProjectileHitUnitKV; // 0x6d8            
            KeyValues* m_pOnProjectileFinishKV; // 0x6e0            
            KeyValues* m_pOnSpellStartKV; // 0x6e8            
            KeyValues* m_pOnAbilityPhaseStartKV; // 0x6f0            
            KeyValues* m_pOnAbilityPhaseInterruptedKV; // 0x6f8            
            KeyValues* m_pOnToggleOnKV; // 0x700            
            KeyValues* m_pOnToggleOffKV; // 0x708            
            KeyValues* m_pOnCreatedKV; // 0x710            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_DataDriven) == 0x718);
    };
};
