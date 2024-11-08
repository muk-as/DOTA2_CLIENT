#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
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
    // Size: 0x738
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Item_DataDriven : public client::C_DOTA_Item
    {
    public:
        bool m_bProcsMagicStick; // 0x6a0        
        bool m_bIsSharedWithTeammates; // 0x6a1        
        bool m_bCastFilterRejectCaster; // 0x6a2        
        [[maybe_unused]] std::uint8_t pad_0x6a3[0x1]; // 0x6a3
        float m_fAnimationPlaybackRate; // 0x6a4        
        float m_fAOERadius; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6ac[0x4]; // 0x6ac
        // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
        char m_ModifierKVDescriptions[0x18]; // 0x6b0        
        KeyValues* m_pOnChannelFinishKV; // 0x6c8        
        KeyValues* m_pOnChannelSucceededKV; // 0x6d0        
        KeyValues* m_pOnChannelInterruptedKV; // 0x6d8        
        KeyValues* m_pOnOwnerSpawnedKV; // 0x6e0        
        KeyValues* m_pOnOwnerDiedKV; // 0x6e8        
        KeyValues* m_pOnProjectileHitUnitKV; // 0x6f0        
        KeyValues* m_pOnProjectileFinishKV; // 0x6f8        
        KeyValues* m_pOnSpellStartKV; // 0x700        
        KeyValues* m_pOnAbilityPhaseStartKV; // 0x708        
        KeyValues* m_pOnToggleOnKV; // 0x710        
        KeyValues* m_pOnToggleOffKV; // 0x718        
        KeyValues* m_pOnEquipKV; // 0x720        
        KeyValues* m_pOnUnequipKV; // 0x728        
        KeyValues* m_pOnCreatedKV; // 0x730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_DataDriven because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_DataDriven) == 0x738);
};
