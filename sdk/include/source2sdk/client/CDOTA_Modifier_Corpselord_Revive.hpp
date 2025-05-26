#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
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
        class CDOTA_Modifier_Corpselord_Revive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1878            
            std::int32_t ticks_to_revive; // 0x187c            
            float tick_interval; // 0x1880            
            // m_pReviveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_pReviveTarget;
            char m_pReviveTarget[0x4]; // 0x1884            
            std::int32_t m_nCurrentTicks; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Corpselord_Revive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Corpselord_Revive) == 0x1890);
    };
};
