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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ScriptInfo_t
        {
        public:
            CUtlString m_code; // 0x_            
            // m_paramsModified has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimParamHandle> m_paramsModified;
            char m_paramsModified[0x_]; // 0x_            
            // m_proxyReadParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_proxyReadParams;
            char m_proxyReadParams[0x_]; // 0x_            
            // m_proxyWriteParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_proxyWriteParams;
            char m_proxyWriteParams[0x_]; // 0x_            
            source2sdk::animgraphlib::AnimScriptType m_eScriptType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_code) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_paramsModified) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_proxyReadParams) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_proxyWriteParams) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ScriptInfo_t, m_eScriptType) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::ScriptInfo_t) == 0x_);
    };
};
