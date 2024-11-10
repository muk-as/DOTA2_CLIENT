#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tusk_WalrusPunch : public client::CDOTA_Buff
    {
    public:
        int32_t crit_multiplier; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        float air_time; // 0x1710        
        float slow_duration; // 0x1714        
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1718        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1720        
        bool m_bWalrusPunch; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1728        
        client::ParticleIndex_t m_nFXIndex; // 0x1740        
        int32_t m_nAttackRecord; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusPunch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tusk_WalrusPunch) == 0x1748);
};
