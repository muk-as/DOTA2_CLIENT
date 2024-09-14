#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_DataDriven : public client::C_DOTABaseAbility
    {
    public:
        bool m_bProcsMagicStick; // 0x5d8        
        bool m_bIsSharedWithTeammates; // 0x5d9        
        bool m_bCastFilterRejectCaster; // 0x5da        
        [[maybe_unused]] std::uint8_t pad_0x5db[0x1]; // 0x5db
        float m_fAOERadius; // 0x5dc        
        int32_t m_CastAnimation; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4]; // 0x5e4
        // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
        char m_ModifierKVDescriptions[0x18]; // 0x5e8        
        KeyValues* m_pOnChannelFinishKV; // 0x600        
        KeyValues* m_pOnChannelSucceededKV; // 0x608        
        KeyValues* m_pOnChannelInterruptedKV; // 0x610        
        KeyValues* m_pOnOwnerSpawnedKV; // 0x618        
        KeyValues* m_pOnOwnerDiedKV; // 0x620        
        KeyValues* m_pOnUpgradeKV; // 0x628        
        KeyValues* m_pOnProjectileHitUnitKV; // 0x630        
        KeyValues* m_pOnProjectileFinishKV; // 0x638        
        KeyValues* m_pOnSpellStartKV; // 0x640        
        KeyValues* m_pOnAbilityPhaseStartKV; // 0x648        
        KeyValues* m_pOnAbilityPhaseInterruptedKV; // 0x650        
        KeyValues* m_pOnToggleOnKV; // 0x658        
        KeyValues* m_pOnToggleOffKV; // 0x660        
        KeyValues* m_pOnCreatedKV; // 0x668        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DataDriven because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DataDriven) == 0x670);
};
