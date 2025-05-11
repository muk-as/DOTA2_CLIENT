#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Size: 0x580
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMoverPathNode : public source2sdk::server::CPointEntity
        {
        public:
            Vector m_vInTangentLocal; // 0x4d8            
            Vector m_vOutTangentLocal; // 0x4e4            
            CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f0            
            CUtlSymbolLarge m_szPathNodeParameter; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnPassThrough; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnPassThroughForward; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnPassThroughReverse; // 0x550            
            // m_hMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hMover;
            char m_hMover[0x4]; // 0x578            
            uint8_t _pad057c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMoverPathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMoverPathNode) == 0x580);
    };
};
