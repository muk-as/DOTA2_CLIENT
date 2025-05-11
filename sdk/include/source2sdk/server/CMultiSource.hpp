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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMultiSource : public source2sdk::server::CLogicalEntity
        {
        public:
            // m_rgEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_rgEntities[32];
            char m_rgEntities[0x80]; // 0x4d8            
            std::int32_t m_rgTriggered[32]; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x5d8            
            std::int32_t m_iTotal; // 0x600            
            uint8_t _pad0604[0x4]; // 0x604
            CUtlSymbolLarge m_globalstate; // 0x608            
            
            // Datamap fields:
            // void CMultiSourceRegister; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMultiSource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMultiSource) == 0x610);
    };
};
