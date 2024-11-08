#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public client::CDOTA_Buff
    {
    public:
        Vector m_vTargetPos; // 0x1708        
        Vector m_vDirection; // 0x1714        
        int32_t move_speed; // 0x1720        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x1724        
        bool m_bIsInPosition; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        client::ParticleIndex_t m_nFXIndex; // 0x172c        
        bool m_bAutoSpawn; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_Soldier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_FurArmy_Soldier) == 0x1738);
};
