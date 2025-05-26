#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicLineToEntity : public source2sdk::server::CLogicalEntity
        {
        public:
            // m_Line has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Vector> m_Line;
            char m_Line[0x28]; // 0x4e0            
            CUtlSymbolLarge m_SourceName; // 0x508            
            // m_StartEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_StartEntity;
            char m_StartEntity[0x4]; // 0x510            
            // m_EndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_EndEntity;
            char m_EndEntity[0x4]; // 0x514            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicLineToEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicLineToEntity) == 0x518);
    };
};
