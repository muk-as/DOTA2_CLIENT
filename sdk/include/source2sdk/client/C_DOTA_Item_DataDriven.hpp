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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_DataDriven : public source2sdk::client::C_DOTA_Item
        {
        public:
            bool m_bProcsMagicStick; // 0x_            
            bool m_bIsSharedWithTeammates; // 0x_            
            bool m_bCastFilterRejectCaster; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fAnimationPlaybackRate; // 0x_            
            float m_fAOERadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
            char m_ModifierKVDescriptions[0x_]; // 0x_            
            KeyValues* m_pOnChannelFinishKV; // 0x_            
            KeyValues* m_pOnChannelSucceededKV; // 0x_            
            KeyValues* m_pOnChannelInterruptedKV; // 0x_            
            KeyValues* m_pOnOwnerSpawnedKV; // 0x_            
            KeyValues* m_pOnOwnerDiedKV; // 0x_            
            KeyValues* m_pOnProjectileHitUnitKV; // 0x_            
            KeyValues* m_pOnProjectileFinishKV; // 0x_            
            KeyValues* m_pOnSpellStartKV; // 0x_            
            KeyValues* m_pOnAbilityPhaseStartKV; // 0x_            
            KeyValues* m_pOnToggleOnKV; // 0x_            
            KeyValues* m_pOnToggleOffKV; // 0x_            
            KeyValues* m_pOnEquipKV; // 0x_            
            KeyValues* m_pOnUnequipKV; // 0x_            
            KeyValues* m_pOnCreatedKV; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_DataDriven) == 0x_);
    };
};
