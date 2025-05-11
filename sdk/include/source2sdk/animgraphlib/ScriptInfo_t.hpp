#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimScriptType.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

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
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ScriptInfo_t
        {
        public:
            CUtlString m_code; // 0x0            
            // m_paramsModified has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimParamHandle> m_paramsModified;
            char m_paramsModified[0x18]; // 0x8            
            // m_proxyReadParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_proxyReadParams;
            char m_proxyReadParams[0x18]; // 0x20            
            // m_proxyWriteParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_proxyWriteParams;
            char m_proxyWriteParams[0x18]; // 0x38            
            source2sdk::animgraphlib::AnimScriptType m_eScriptType; // 0x50            
            uint8_t _pad0052[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_code) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_paramsModified) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_proxyReadParams) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_proxyWriteParams) == 0x38);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_eScriptType) == 0x50);
        
        static_assert(sizeof(source2sdk::animgraphlib::ScriptInfo_t) == 0x58);
    };
};
