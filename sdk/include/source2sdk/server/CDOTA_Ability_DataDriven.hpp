#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x668
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DataDriven : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x18]; // 0x5b8
            bool m_bProcsMagicStick; // 0x5d0            
            bool m_bIsSharedWithTeammates; // 0x5d1            
            bool m_bCastFilterRejectCaster; // 0x5d2            
            uint8_t _pad05d3[0x1]; // 0x5d3
            float m_fAOERadius; // 0x5d4            
            std::int32_t m_CastAnimation; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
            char m_ModifierKVDescriptions[0x18]; // 0x5e0            
            KeyValues* m_pOnChannelFinishKV; // 0x5f8            
            KeyValues* m_pOnChannelSucceededKV; // 0x600            
            KeyValues* m_pOnChannelInterruptedKV; // 0x608            
            KeyValues* m_pOnOwnerSpawnedKV; // 0x610            
            KeyValues* m_pOnOwnerDiedKV; // 0x618            
            KeyValues* m_pOnUpgradeKV; // 0x620            
            KeyValues* m_pOnProjectileHitUnitKV; // 0x628            
            KeyValues* m_pOnProjectileFinishKV; // 0x630            
            KeyValues* m_pOnSpellStartKV; // 0x638            
            KeyValues* m_pOnAbilityPhaseStartKV; // 0x640            
            KeyValues* m_pOnAbilityPhaseInterruptedKV; // 0x648            
            KeyValues* m_pOnToggleOnKV; // 0x650            
            KeyValues* m_pOnToggleOffKV; // 0x658            
            KeyValues* m_pOnCreatedKV; // 0x660            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DataDriven) == 0x668);
    };
};
