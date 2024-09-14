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
    // Size: 0x6f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_DataDriven : public server::CDOTA_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x648[0x18]; // 0x648
        bool m_bProcsMagicStick; // 0x660        
        bool m_bIsSharedWithTeammates; // 0x661        
        bool m_bCastFilterRejectCaster; // 0x662        
        [[maybe_unused]] std::uint8_t pad_0x663[0x1]; // 0x663
        float m_fAnimationPlaybackRate; // 0x664        
        float m_fAOERadius; // 0x668        
        [[maybe_unused]] std::uint8_t pad_0x66c[0x4]; // 0x66c
        // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
        char m_ModifierKVDescriptions[0x18]; // 0x670        
        KeyValues* m_pOnChannelFinishKV; // 0x688        
        KeyValues* m_pOnChannelSucceededKV; // 0x690        
        KeyValues* m_pOnChannelInterruptedKV; // 0x698        
        KeyValues* m_pOnOwnerSpawnedKV; // 0x6a0        
        KeyValues* m_pOnOwnerDiedKV; // 0x6a8        
        KeyValues* m_pOnProjectileHitUnitKV; // 0x6b0        
        KeyValues* m_pOnProjectileFinishKV; // 0x6b8        
        KeyValues* m_pOnSpellStartKV; // 0x6c0        
        KeyValues* m_pOnAbilityPhaseStartKV; // 0x6c8        
        KeyValues* m_pOnToggleOnKV; // 0x6d0        
        KeyValues* m_pOnToggleOffKV; // 0x6d8        
        KeyValues* m_pOnEquipKV; // 0x6e0        
        KeyValues* m_pOnUnequipKV; // 0x6e8        
        KeyValues* m_pOnCreatedKV; // 0x6f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_DataDriven) == 0x6f8);
};
