#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/EntFinderMethod_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointEntityFinder : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNotSaved
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntity;
            char m_hEntity[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iFilterName; // 0x_            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iRefName; // 0x_            
            // m_hReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hReference;
            char m_hReference[0x_]; // 0x_            
            source2sdk::server::EntFinderMethod_t m_FindMethod; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnFoundEntity; // 0x_            
            
            // Datamap fields:
            // void InputFindEntity; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointEntityFinder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointEntityFinder) == 0x_);
    };
};
