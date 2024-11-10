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
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_DataDriven : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x18]; // 0x5c8
        bool m_bProcsMagicStick; // 0x5e0        
        bool m_bIsSharedWithTeammates; // 0x5e1        
        bool m_bCastFilterRejectCaster; // 0x5e2        
        [[maybe_unused]] std::uint8_t pad_0x5e3[0x1]; // 0x5e3
        float m_fAOERadius; // 0x5e4        
        int32_t m_CastAnimation; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
        char m_ModifierKVDescriptions[0x18]; // 0x5f0        
        KeyValues* m_pOnChannelFinishKV; // 0x608        
        KeyValues* m_pOnChannelSucceededKV; // 0x610        
        KeyValues* m_pOnChannelInterruptedKV; // 0x618        
        KeyValues* m_pOnOwnerSpawnedKV; // 0x620        
        KeyValues* m_pOnOwnerDiedKV; // 0x628        
        KeyValues* m_pOnUpgradeKV; // 0x630        
        KeyValues* m_pOnProjectileHitUnitKV; // 0x638        
        KeyValues* m_pOnProjectileFinishKV; // 0x640        
        KeyValues* m_pOnSpellStartKV; // 0x648        
        KeyValues* m_pOnAbilityPhaseStartKV; // 0x650        
        KeyValues* m_pOnAbilityPhaseInterruptedKV; // 0x658        
        KeyValues* m_pOnToggleOnKV; // 0x660        
        KeyValues* m_pOnToggleOffKV; // 0x668        
        KeyValues* m_pOnCreatedKV; // 0x670        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DataDriven) == 0x678);
};
