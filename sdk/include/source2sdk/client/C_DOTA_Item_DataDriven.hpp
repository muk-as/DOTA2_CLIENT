#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"

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
        // Size: 0x7b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_DataDriven : public source2sdk::client::C_DOTA_Item
        {
        public:
            bool m_bProcsMagicStick; // 0x720            
            bool m_bIsSharedWithTeammates; // 0x721            
            bool m_bCastFilterRejectCaster; // 0x722            
            uint8_t _pad0723[0x1]; // 0x723
            float m_fAnimationPlaybackRate; // 0x724            
            float m_fAOERadius; // 0x728            
            uint8_t _pad072c[0x4]; // 0x72c
            // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
            char m_ModifierKVDescriptions[0x18]; // 0x730            
            KeyValues* m_pOnChannelFinishKV; // 0x748            
            KeyValues* m_pOnChannelSucceededKV; // 0x750            
            KeyValues* m_pOnChannelInterruptedKV; // 0x758            
            KeyValues* m_pOnOwnerSpawnedKV; // 0x760            
            KeyValues* m_pOnOwnerDiedKV; // 0x768            
            KeyValues* m_pOnProjectileHitUnitKV; // 0x770            
            KeyValues* m_pOnProjectileFinishKV; // 0x778            
            KeyValues* m_pOnSpellStartKV; // 0x780            
            KeyValues* m_pOnAbilityPhaseStartKV; // 0x788            
            KeyValues* m_pOnToggleOnKV; // 0x790            
            KeyValues* m_pOnToggleOffKV; // 0x798            
            KeyValues* m_pOnEquipKV; // 0x7a0            
            KeyValues* m_pOnUnequipKV; // 0x7a8            
            KeyValues* m_pOnCreatedKV; // 0x7b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_DataDriven) == 0x7b8);
    };
};
