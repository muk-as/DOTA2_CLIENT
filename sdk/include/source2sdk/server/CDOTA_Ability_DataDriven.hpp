#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_DataDriven : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x18]; // 0x5a0
        bool m_bProcsMagicStick; // 0x5b8        
        bool m_bIsSharedWithTeammates; // 0x5b9        
        bool m_bCastFilterRejectCaster; // 0x5ba        
        [[maybe_unused]] std::uint8_t pad_0x5bb[0x1]; // 0x5bb
        float m_fAOERadius; // 0x5bc        
        int32_t m_CastAnimation; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4]; // 0x5c4
        // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
        char m_ModifierKVDescriptions[0x18]; // 0x5c8        
        KeyValues* m_pOnChannelFinishKV; // 0x5e0        
        KeyValues* m_pOnChannelSucceededKV; // 0x5e8        
        KeyValues* m_pOnChannelInterruptedKV; // 0x5f0        
        KeyValues* m_pOnOwnerSpawnedKV; // 0x5f8        
        KeyValues* m_pOnOwnerDiedKV; // 0x600        
        KeyValues* m_pOnUpgradeKV; // 0x608        
        KeyValues* m_pOnProjectileHitUnitKV; // 0x610        
        KeyValues* m_pOnProjectileFinishKV; // 0x618        
        KeyValues* m_pOnSpellStartKV; // 0x620        
        KeyValues* m_pOnAbilityPhaseStartKV; // 0x628        
        KeyValues* m_pOnAbilityPhaseInterruptedKV; // 0x630        
        KeyValues* m_pOnToggleOnKV; // 0x638        
        KeyValues* m_pOnToggleOffKV; // 0x640        
        KeyValues* m_pOnCreatedKV; // 0x648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DataDriven) == 0x650);
};
