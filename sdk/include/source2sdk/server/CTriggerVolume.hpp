#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerVolume : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iFilterName; // 0x7c8            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x7d0            
            uint8_t _pad07d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerVolume) == 0x7d8);
    };
};
