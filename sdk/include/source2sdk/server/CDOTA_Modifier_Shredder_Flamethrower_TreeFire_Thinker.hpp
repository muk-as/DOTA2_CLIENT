#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vecTreeFires has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<CHandle<source2sdk::server::CBaseEntity>,source2sdk::entity2::GameTime_t>> m_vecTreeFires;
            char m_vecTreeFires[0x18]; // 0x1878            
            bool m_bCleanupWhenEmpty; // 0x1890            
            uint8_t _pad1891[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker) == 0x1898);
    };
};
