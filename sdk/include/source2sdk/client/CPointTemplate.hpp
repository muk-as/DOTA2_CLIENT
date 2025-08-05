#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/client/PointTemplateClientOnlyEntityBehavior_t.hpp"
#include "source2sdk/client/PointTemplateOwnerSpawnGroupType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointTemplate : public source2sdk::client::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszWorldName; // 0x5e8            
            CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x5f0            
            CUtlSymbolLarge m_iszEntityFilterName; // 0x5f8            
            float m_flTimeoutInterval; // 0x600            
            bool m_bAsynchronouslySpawnEntities; // 0x604            
            uint8_t _pad0605[0x3]; // 0x605
            source2sdk::client::PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x608            
            source2sdk::client::PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x60c            
            // m_createdSpawnGroupHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_createdSpawnGroupHandles;
            char m_createdSpawnGroupHandles[0x18]; // 0x610            
            // m_SpawnedEntityHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityHandle> m_SpawnedEntityHandles;
            char m_SpawnedEntityHandles[0x18]; // 0x628            
            HSCRIPT m_ScriptSpawnCallback; // 0x640            
            HSCRIPT m_ScriptCallbackScope; // 0x648            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointTemplate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointTemplate) == 0x650);
    };
};
