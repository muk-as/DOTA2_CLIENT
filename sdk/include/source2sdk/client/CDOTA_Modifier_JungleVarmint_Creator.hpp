#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_JungleVarmint_Creator : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hVarmint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVarmint;
            char m_hVarmint[0x4]; // 0x1888            
            CEntityIndex m_nClientVarmintEntIndex; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_JungleVarmint_Creator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_JungleVarmint_Creator) == 0x1890);
    };
};
