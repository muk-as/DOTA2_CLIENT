#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker : public client::CDOTA_Buff
    {
    public:
        // m_vecTreeFires has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlPair<CHandle<server::CBaseEntity>,entity2::GameTime_t>> m_vecTreeFires;
        char m_vecTreeFires[0x18]; // 0x16e8        
        bool m_bCleanupWhenEmpty; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker) == 0x1708);
};
