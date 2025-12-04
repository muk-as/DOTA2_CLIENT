#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        class CMultiSource : public source2sdk::server::CLogicalEntity
        {
        public:
            // m_rgEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_rgEntities[32];
            char m_rgEntities[0x_]; // 0x_            
            std::int32_t m_rgTriggered[32]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x_            
            std::int32_t m_iTotal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_globalstate; // 0x_            
            
            // Datamap fields:
            // void CMultiSourceRegister; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMultiSource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMultiSource) == 0x_);
    };
};
