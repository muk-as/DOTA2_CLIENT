#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x558
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCommentaryAuto : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnCommentaryNewGame; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnCommentaryMidGame; // 0x508            
            source2sdk::entity2::CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x530            
            
            // Datamap fields:
            // void InputMultiplayerSpawned; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCommentaryAuto because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCommentaryAuto) == 0x558);
    };
};
