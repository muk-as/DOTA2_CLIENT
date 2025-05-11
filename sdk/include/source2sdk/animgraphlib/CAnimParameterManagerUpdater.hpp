#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimParameterBase.hpp"
#include "source2sdk/modellib/AnimParamID.hpp"

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
        // Size: 0x100
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimParameterManagerUpdater
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            // m_parameters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimParameterBase>> m_parameters;
            char m_parameters[0x18]; // 0x18            
            // m_idToIndexMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::modellib::AnimParamID,std::int32_t> m_idToIndexMap;
            char m_idToIndexMap[0x20]; // 0x30            
            // m_nameToIndexMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CUtlString,std::int32_t> m_nameToIndexMap;
            char m_nameToIndexMap[0x20]; // 0x50            
            // m_indexToHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimParamHandle> m_indexToHandle;
            char m_indexToHandle[0x18]; // 0x70            
            // m_autoResetParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlPair<source2sdk::animgraphlib::CAnimParamHandle,CAnimVariant>> m_autoResetParams;
            char m_autoResetParams[0x18]; // 0x88            
            // m_autoResetMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::animgraphlib::CAnimParamHandle,std::int16_t> m_autoResetMap;
            char m_autoResetMap[0x20]; // 0xa0            
            uint8_t _pad00c0[0x40];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterManagerUpdater, m_parameters) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterManagerUpdater, m_idToIndexMap) == 0x30);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterManagerUpdater, m_nameToIndexMap) == 0x50);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterManagerUpdater, m_indexToHandle) == 0x70);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterManagerUpdater, m_autoResetParams) == 0x88);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterManagerUpdater, m_autoResetMap) == 0xa0);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimParameterManagerUpdater) == 0x100);
    };
};
