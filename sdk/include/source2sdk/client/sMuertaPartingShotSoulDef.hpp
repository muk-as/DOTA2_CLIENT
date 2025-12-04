#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sMuertaPartingShotSoulDef
        {
        public:
            // hHeroOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hHeroOwner;
            char hHeroOwner[0x_]; // 0x_            
            // hSoulClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hSoulClone;
            char hSoulClone[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sMuertaPartingShotSoulDef, hHeroOwner) == 0x_);
        static_assert(offsetof(source2sdk::client::sMuertaPartingShotSoulDef, hSoulClone) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sMuertaPartingShotSoulDef) == 0x_);
    };
};
