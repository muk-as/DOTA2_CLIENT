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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSceneListManager : public source2sdk::server::CLogicalEntity
        {
        public:
            // m_hListManagers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CSceneListManager>> m_hListManagers;
            char m_hListManagers[0x18]; // 0x4e0            
            CUtlSymbolLarge m_iszScenes[16]; // 0x4f8            
            // m_hScenes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hScenes[16];
            char m_hScenes[0x40]; // 0x578            
            
            // Datamap fields:
            // void InputShutdown; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSceneListManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSceneListManager) == 0x5b8);
    };
};
