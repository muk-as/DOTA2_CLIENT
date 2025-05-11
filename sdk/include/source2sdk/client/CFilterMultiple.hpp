#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseFilter.hpp"
#include "source2sdk/client/filter_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterMultiple : public source2sdk::client::CBaseFilter
        {
        public:
            source2sdk::client::filter_t m_nFilterType; // 0x568            
            uint8_t _pad056c[0x4]; // 0x56c
            CUtlSymbolLarge m_iFilterName[10]; // 0x570            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hFilter[10];
            char m_hFilter[0x28]; // 0x5c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterMultiple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFilterMultiple) == 0x5e8);
    };
};
