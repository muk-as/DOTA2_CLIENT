#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x720
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_DataDriven : public server::CDOTA_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x670[0x18]; // 0x670
        bool m_bProcsMagicStick; // 0x688        
        bool m_bIsSharedWithTeammates; // 0x689        
        bool m_bCastFilterRejectCaster; // 0x68a        
        [[maybe_unused]] std::uint8_t pad_0x68b[0x1]; // 0x68b
        float m_fAnimationPlaybackRate; // 0x68c        
        float m_fAOERadius; // 0x690        
        [[maybe_unused]] std::uint8_t pad_0x694[0x4]; // 0x694
        // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
        char m_ModifierKVDescriptions[0x18]; // 0x698        
        KeyValues* m_pOnChannelFinishKV; // 0x6b0        
        KeyValues* m_pOnChannelSucceededKV; // 0x6b8        
        KeyValues* m_pOnChannelInterruptedKV; // 0x6c0        
        KeyValues* m_pOnOwnerSpawnedKV; // 0x6c8        
        KeyValues* m_pOnOwnerDiedKV; // 0x6d0        
        KeyValues* m_pOnProjectileHitUnitKV; // 0x6d8        
        KeyValues* m_pOnProjectileFinishKV; // 0x6e0        
        KeyValues* m_pOnSpellStartKV; // 0x6e8        
        KeyValues* m_pOnAbilityPhaseStartKV; // 0x6f0        
        KeyValues* m_pOnToggleOnKV; // 0x6f8        
        KeyValues* m_pOnToggleOffKV; // 0x700        
        KeyValues* m_pOnEquipKV; // 0x708        
        KeyValues* m_pOnUnequipKV; // 0x710        
        KeyValues* m_pOnCreatedKV; // 0x718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_DataDriven) == 0x720);
};
