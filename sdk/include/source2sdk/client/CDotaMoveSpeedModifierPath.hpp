#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DotaModifierPathNode_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDotaMoveSpeedModifierPath : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flPathLength; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DotaModifierPathNode_t> m_vecNodes;
            char m_vecNodes[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrigger;
            char m_hTrigger[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x_
            // CUtlSymbolLarge pathNodeRadiusScales; // 0x_
            // CUtlSymbolLarge pathNodeMoveSpeedTypes; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaMoveSpeedModifierPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDotaMoveSpeedModifierPath) == 0x_);
    };
};
