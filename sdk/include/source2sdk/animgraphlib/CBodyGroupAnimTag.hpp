#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/animgraphlib/CBodyGroupSetting.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Body Group Tag"
        #pragma pack(push, 1)
        class CBodyGroupAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertyFriendlyName "Priority"
            std::int32_t m_nPriority; // 0x58            
            uint8_t _pad005c[0x4]; // 0x5c
            // metadata: MPropertyFriendlyName "Body Group Settings"
            // m_bodyGroupSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CBodyGroupSetting> m_bodyGroupSettings;
            char m_bodyGroupSettings[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyGroupAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBodyGroupAnimTag) == 0x78);
    };
};
