#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/ScriptInfo_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x1a0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimScriptManager
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_scriptInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::ScriptInfo_t> m_scriptInfo;
            char m_scriptInfo[0x18]; // 0x10            
            uint8_t _pad0028[0x178];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimScriptManager, m_scriptInfo) == 0x10);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimScriptManager) == 0x1a0);
    };
};
