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
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_Tree;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x10]; // 0x5c8
        bool m_bFinished; // 0x5d8        
        bool m_bInterrupted; // 0x5d9        
        bool m_bPlayedChargeAnimation; // 0x5da        
        [[maybe_unused]] std::uint8_t pad_0x5db[0x1]; // 0x5db
        Vector m_vProjectileLocation; // 0x5dc        
        Vector m_vTargetLocation; // 0x5e8        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5f4        
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x5f8        
        // m_hTrackingProjectileTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_Tree*> m_hTrackingProjectileTrees;
        char m_hTrackingProjectileTrees[0x18]; // 0x610        
        int32_t nFXIndex; // 0x628        
        int32_t m_iCurProjectileIndex; // 0x62c        
        Vector m_vChargeStartPos; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_SpiritBreaker_ChargeOfDarkness because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_SpiritBreaker_ChargeOfDarkness) == 0x640);
};
